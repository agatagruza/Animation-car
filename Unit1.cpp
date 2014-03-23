//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFAnimacja *FAnimacja;
int delta=0;
//---------------------------------------------------------------------------
__fastcall TFAnimacja::TFAnimacja(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFAnimacja::PaintBoxPaint(TObject *Sender)
{
          PaintBox->Canvas->Brush->Color=clRed;
                PaintBox->Canvas->Pen->Color=clRed;
                PaintBox->Canvas->Ellipse(Tag,FAnimacja->Height/2,50+Tag,50+FAnimacja->Height/2);//tylne kolo
                PaintBox->Canvas->Ellipse(Tag+100,FAnimacja->Height/2,50+Tag+100,50+FAnimacja->Height/2);//przednie kolo
                PaintBox->Canvas->Brush->Color=clBlue;
                PaintBox->Canvas->Rectangle(Tag+25,FAnimacja->Height/2-10,25+Tag+100,FAnimacja->Height/2+10);//karoseria
                PaintBox->Canvas->Brush->Color=clYellow;
                if(delta>0)
                  PaintBox->Canvas->Ellipse(20+Tag+100,FAnimacja->Height/2-10,30+Tag+110,FAnimacja->Height/2+10);//swiatla
                else
                  PaintBox->Canvas->Ellipse(10+Tag,FAnimacja->Height/2-10,30+Tag,FAnimacja->Height/2+10);//swiatla
                PaintBox->Canvas->Brush->Color=clGreen;
                PaintBox->Canvas->Rectangle(Tag+45,FAnimacja->Height/2-30,25+Tag+80,FAnimacja->Height/2-10);
                Sleep(TimerZegar->Interval);
                PaintBox->Canvas->Brush->Color=clBtnFace;
                PaintBox->Canvas->Pen->Color=clBtnFace;
                PaintBox->Canvas->Ellipse(Tag,FAnimacja->Height/2,50+Tag,50+FAnimacja->Height/2);
                PaintBox->Canvas->Ellipse(Tag+100,FAnimacja->Height/2,50+Tag+100,50+FAnimacja->Height/2);
                PaintBox->Canvas->Rectangle(Tag+25,FAnimacja->Height/2-10,25+Tag+100,FAnimacja->Height/2+10);
                PaintBox->Canvas->Ellipse(20+Tag+100,FAnimacja->Height/2-10,30+Tag+110,FAnimacja->Height/2+10);
                if(delta>0)
                  PaintBox->Canvas->Ellipse(20+Tag+100,FAnimacja->Height/2-10,30+Tag+110,FAnimacja->Height/2+10);
                else
                  PaintBox->Canvas->Ellipse(10+Tag,FAnimacja->Height/2-10,30+Tag,FAnimacja->Height/2+10);
                PaintBox->Canvas->Rectangle(Tag+45,FAnimacja->Height/2-30,25+Tag+80,FAnimacja->Height/2-10);


}
//---------------------------------------------------------------------------
void __fastcall TFAnimacja::TimerZegarTimer(TObject *Sender)
{

     
                if(55+Tag+100>FAnimacja->Width||Tag<0)
                  delta=-delta;
                PaintBoxPaint(Sender);
                Tag+=delta;
}


//---------------------------------------------------------------------------
