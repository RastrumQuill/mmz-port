// sub_080D918C at 0x080D918C (thumb)

undefined4 sub_080D918C(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08863a28)[*(byte *)(param_1 + 9)] + 4);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CEEC(param_1);
  sub_0801CF00(param_1,0x8107);
  sub_0801CFF0(param_1);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    iVar3 = (uVar2 * 2 >> 0x11 & 0xf) + 0x20;
    *(int *)(param_1 + 100) = iVar3;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(uint *)(param_1 + 0x68) = uVar2 * 2 >> 0x11 & 0xf;
    *(int *)(param_1 + 0x5c) = iVar3 * 0x10;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
      iVar3 = (uVar2 * 2 >> 0x11 & 0xf) + 0x10;
      *(int *)(param_1 + 100) = iVar3;
      *(int *)(param_1 + 0x5c) = iVar3 * 0x10;
      uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202dc38 = uVar2 & 0x7fffffff;
      iVar3 = (uVar2 * 2 >> 0x11 & 0xf) + 0x1c;
      *(int *)(param_1 + 0x68) = iVar3;
      *(int *)(param_1 + 0x60) = iVar3 * 0x10;
    }
  }
  else if (bVar1 == 2) {
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    iVar3 = (uVar2 * 2 >> 0x11 & 0xf) + 0x10;
    *(int *)(param_1 + 100) = iVar3;
    *(int *)(param_1 + 0x5c) = iVar3 * 0x10;
    uVar2 = (uVar2 & 0x7fffffff) * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    iVar3 = -0x1c - (uVar2 * 2 >> 0x11 & 0xf);
    *(int *)(param_1 + 0x68) = iVar3;
    *(int *)(param_1 + 0x60) = iVar3 * 0x10;
  }
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
    *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
  }
  sub_080D90BC(param_1);
  return in_lr;
}

