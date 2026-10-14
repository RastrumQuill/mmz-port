// sub_0808BACC at 0x0808BACC (thumb)

undefined8 sub_0808BACC(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(undefined *)(param_1 + 0xd) = 0;
  if ((-1 < *(int *)(DAT_0202e130 + 0x54) - *(int *)(param_1 + 0x54)) ||
     (*(char *)(param_1 + 0xbd) == '\x01')) {
    iVar2 = *(int *)(param_1 + 0x54);
    iVar4 = *(int *)(param_1 + 0xc0);
    iVar5 = iVar2 - iVar4;
    if (iVar5 < 0) {
      iVar5 = iVar4 - iVar2;
    }
    if (0x10000 < iVar5) {
      bVar1 = *(byte *)(param_1 + 10) >> 4;
      if (iVar2 - *(int *)(param_1 + 0xc0) < 0) {
        if ((bVar1 & 1) != 1) {
LAB_0808bb42:
          *(undefined *)(param_1 + 0xe) = 4;
          *(undefined *)(param_1 + 0xbd) = 2;
          uVar3 = 1;
          goto LAB_0808bb58;
        }
      }
      else if ((bVar1 & 1) != 0) goto LAB_0808bb42;
    }
  }
  *(undefined *)(param_1 + 0xe) = 2;
  uVar3 = 0;
LAB_0808bb58:
  return CONCAT44(in_lr,uVar3);
}

