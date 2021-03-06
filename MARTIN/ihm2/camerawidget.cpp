#include "camerawidget.h"

/**
* \file camerawidget.cpp
* \brief Ce programme permet la conversion d'une IplImage en une QPixmap et le placement du constructeur (widget) dans un layout.
* \author Martin PRADEAU
* \version Version finale
* \date Janvier 2014
*/

/**
 * \brief    Constructeur
 * \details  Placement du label dans un layout.
 * \param    QWidget *parent
 */

CameraWidget::CameraWidget(QWidget *parent)
    : QWidget(parent)
{
    m_layout = new QVBoxLayout;
    m_imageLabel = new QLabel;

    QImage dummy(100, 100, QImage::Format_RGB32);
    m_image = dummy;

    m_layout->addWidget(m_imageLabel);

    for (int x = 0; x < 100; x ++)
        for (int y =0; y < 100; y++)
            m_image.setPixel(x,y,qRgb(x, y, y));

    m_imageLabel->setPixmap(QPixmap::fromImage(m_image));

    setLayout(m_layout);
}

/**
 * \brief    Destructeur
 * \param    void
 */

CameraWidget::~CameraWidget(void)
{

}

/**
 * \brief    Placement d'image
 * \details  Fonction qui permet le placement de l'image dans le label destiné à l'accueillir
 * \param    IplImage *image
 */

void CameraWidget::putFrame(IplImage *image)
{
    m_imageLabel->setPixmap(toPixmap(image));
}

/**
 * \brief    Conversion d'image
 * \details  Fonction de conversion d'une IplImage en une QPixmap
 * \param    IplImage *cvimage
 * \return   QPixmap
 */

QPixmap CameraWidget::toPixmap(IplImage *cvimage) {
    int cvIndex, cvLineStart;

    switch (cvimage->depth) {
        case IPL_DEPTH_8U:
            switch (cvimage->nChannels) {
                case 3:
                    if ( (cvimage->width != m_image.width()) || (cvimage->height != m_image.height()) ) {
                        QImage temp(cvimage->width, cvimage->height, QImage::Format_RGB32);
                        m_image = temp;
                    }
                    cvIndex = 0; cvLineStart = 0;
                    for (int y = 0; y < cvimage->height; y++) {
                        unsigned char red,green,blue;
                        cvIndex = cvLineStart;
                        for (int x = 0; x < cvimage->width; x++) {
                            red = cvimage->imageData[cvIndex+2];
                            green = cvimage->imageData[cvIndex+1];
                            blue = cvimage->imageData[cvIndex+0];

                            m_image.setPixel(x,y,qRgb(red, green, blue));
                            cvIndex += 3;
                        }
                        cvLineStart += cvimage->widthStep;
                    }
                    break;

            case 1:
                if ( (cvimage->width != m_image.width()) || (cvimage->height != m_image.height()) ) {
                    QImage temp(cvimage->width, cvimage->height, QImage::Format_RGB32);
                    m_image = temp;
                }
                cvIndex = 0; cvLineStart = 0;
                for (int y = 0; y < cvimage->height; y++) {
                    unsigned char red,green,blue;
                    cvIndex = cvLineStart;
                    for (int x = 0; x < cvimage->width; x++) {
                        red = cvimage->imageData[cvIndex+2];
                        green = cvimage->imageData[cvIndex+1];
                        blue = cvimage->imageData[cvIndex+0];

                        m_image.setPixel(x,y,qRgb(red, green, blue));
                        cvIndex += 3;
                    }
                    cvLineStart += cvimage->widthStep;
                }
                break;
                default:
                    qWarning("This number of channels is not supported\n");
                    break;
            }
            break;
        default:
            qWarning("This type of IplImage is not implemented in QOpenCVWidget\n");
            break;
    }
    return QPixmap::fromImage(m_image);
}
