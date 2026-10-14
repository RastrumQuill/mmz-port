// sub_08060FE4 at 0x08060FE4 (thumb)

undefined4 sub_08060FE4(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
  uVar1 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
  DAT_0202e188 = uVar1 & 0x7fffffff;
  uVar1 = uVar1 * 2 >> 0x11 & 0xff;
  iVar4 = (uVar3 * 2 >> 0x11 & 0x3f) * 0x100;
  iVar2 = iVar4 * (short)(&DAT_080ef450)[uVar1 + 0x40 & 0xff];
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  local_1c = *(int *)(param_1 + 0x54) + (iVar2 >> 8);
  iVar4 = iVar4 * (short)(&DAT_080ef450)[uVar1];
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  local_18 = *(int *)(param_1 + 0x58) + (iVar4 >> 8);
  if (param_2 == '\0') {
    sub_080AC60C(2,&local_1c);
  }
  else {
    sub_080AC60C(1,&local_1c);
  }
  return in_lr;
}

