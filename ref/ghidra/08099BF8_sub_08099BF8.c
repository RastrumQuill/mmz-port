// sub_08099BF8 at 0x08099BF8 (thumb)

undefined8 sub_08099BF8(int param_1,int param_2,undefined param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  if (((param_2 == 0) || (param_2 = param_2 + -1, param_2 == 0)) &&
     (iVar2 = sub_08099CB4(param_1,param_3), iVar2 != 0)) {
    uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
    DAT_02022890 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11;
    param_2 = (int)(uVar3 + ((int)uVar3 >> 3) * -8 + 1) / 2 + 0xe;
    iVar4 = (int)*(short *)(DAT_0202320c + 8) - (int)*(short *)(DAT_0202320c + 10);
    iVar5 = iVar4 + -2;
    iVar2 = sub_080B3F2C(0xc,0);
    if (iVar2 != 0) {
      iVar5 = iVar4 + -3;
    }
    if (0 < iVar5) {
      param_2 = param_2 + iVar5 * 2;
    }
    cVar1 = sub_080B54E8(param_1);
    if (cVar1 != '\0') {
      iVar4 = *(int *)(param_1 + 0x20);
      iVar2 = 3;
      do {
        iVar2 = iVar2 + -1;
        cVar1 = sub_080B54E8(*(undefined4 *)(iVar4 + 0xf0 + iVar2 * 4));
        if (cVar1 != '\0') {
          param_2 = param_2 + 2;
        }
      } while (iVar2 != 0);
    }
  }
  return CONCAT44(in_lr,param_2);
}

