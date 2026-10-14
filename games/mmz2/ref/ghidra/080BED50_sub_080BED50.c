// sub_080BED50 at 0x080BED50 (thumb)

undefined8 sub_080BED50(int param_1,int param_2,undefined param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  if (((param_2 == 0) || (param_2 = param_2 + -1, param_2 == 0)) &&
     (iVar2 = sub_080BEE08(param_1,param_3), iVar2 != 0)) {
    uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar3 & 0x7fffffff;
    uVar3 = uVar3 * 2 >> 0x11;
    param_2 = (int)(uVar3 + ((int)uVar3 >> 3) * -8 + 1) / 2 + 0xe;
    iVar2 = ((int)*(short *)(DAT_0202f090 + 8) - (int)*(short *)(DAT_0202f090 + 10)) + -2;
    sub_080D5194(0xc,0);
    if (0 < iVar2) {
      param_2 = param_2 + iVar2 * 2;
    }
    cVar1 = sub_080D6580(param_1);
    if (cVar1 != '\0') {
      iVar4 = *(int *)(param_1 + 0x28);
      iVar2 = 3;
      do {
        iVar2 = iVar2 + -1;
        cVar1 = sub_080D6580(*(undefined4 *)(iVar4 + 0x2a8 + iVar2 * 4));
        if (cVar1 != '\0') {
          param_2 = param_2 + 2;
        }
      } while (iVar2 != 0);
    }
  }
  return CONCAT44(in_lr,param_2);
}

