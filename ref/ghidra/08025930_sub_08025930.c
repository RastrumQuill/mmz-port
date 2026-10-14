// sub_08025930 at 0x08025930 (thumb)

undefined8 sub_08025930(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  do {
    if (param_1 < 0) {
      if (param_1 == -0x7fff || -param_1 < 0x7fff) {
LAB_08025960:
        if (param_2 < 0) {
          if (param_2 == -0x7fff || -param_2 < 0x7fff) goto LAB_08025970;
        }
        else if (param_2 < 0x8000) {
LAB_08025970:
          uVar1 = sub_080C88E8((int)(short)param_1,(int)(short)param_2);
          iVar2 = (uVar1 & 0xffff) + 0x80;
          iVar3 = (iVar2 >> 8) + (iVar2 >> 0x10) * -0x100;
          iVar4 = iVar3 + 0x100;
          iVar2 = iVar4;
          if (iVar4 < 0) {
            iVar2 = iVar3 + 0x1ff;
          }
          return CONCAT44(in_lr,iVar4 + (iVar2 >> 8) * -0x100);
        }
      }
    }
    else if (param_1 < 0x8000) goto LAB_08025960;
    if (param_1 < 0) {
      param_1 = param_1 + 0xf;
    }
    param_1 = param_1 >> 4;
    if (param_2 < 0) {
      param_2 = param_2 + 0xf;
    }
    param_2 = param_2 >> 4;
  } while( true );
}

