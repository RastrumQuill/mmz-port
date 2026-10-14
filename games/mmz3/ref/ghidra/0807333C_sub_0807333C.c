// sub_0807333C at 0x0807333C (thumb)

undefined8 sub_0807333C(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x58) - *(int *)(DAT_0202f5c0 + 0x58);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0x2000) {
    uVar1 = DAT_0202f608 * 0x343fd + 0x269ec3;
    DAT_0202f608 = uVar1 & 0x7fffffff;
    if ((&DAT_080febe4)[uVar1 * 2 >> 0x11 & 0xf] == '\x01') {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return CONCAT44(in_lr,uVar2);
}

