// sub_080E7FCC at 0x080E7FCC (thumb)

undefined4 sub_080E7FCC(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_lr;
  
  uVar4 = (uint)*(byte *)(param_1 + 0xde4);
  cVar2 = *(char *)(param_1 + 4);
  cVar1 = sub_080E84BC(param_1,(int)cVar2);
  if (cVar1 == '\0') {
    if ((cVar2 == 0) && (cVar2 = sub_080E8678(param_1), cVar2 != '\0')) {
      uVar4 = (uint)*(byte *)(param_1 + 0xde5);
      uVar3 = 0;
      if (uVar4 == 3) {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    *(undefined *)(param_1 + 1) = 2;
    *(undefined *)(param_1 + 2) = 0;
    uVar3 = 0;
  }
  cVar2 = sub_080EF11C(*(undefined4 *)(param_1 + 0xdd4 + uVar4 * 4),uVar3,
                       *(undefined4 *)(&DAT_0835e4fc + uVar4 * 4));
  *(short *)(param_1 + 4) = (short)cVar2;
  sub_080E8768(param_1,(int)(char)uVar4,0xffffffff);
  return in_lr;
}

