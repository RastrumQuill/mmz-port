// sub_0808F674 at 0x0808F674 (thumb)

undefined4 sub_0808F674(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0808f6aa:
    sub_080177F4(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(uint *)(param_1 + 0x5c) = (uint)*(byte *)(param_1 + 0x12) * 0x200 + -0x100;
      sub_08017700(param_1,0x7708);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0808f6aa;
    }
  }
  else {
    if (bVar1 == 2) {
      sub_08017700(param_1,0x7709);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (bVar1 != 3) goto LAB_0808f6e0;
    sub_080177F4(param_1);
  }
LAB_0808f6e0:
  iVar2 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar2;
  if (*(int *)(param_1 + 0x5c) < 1) {
    iVar2 = sub_08009F80(iVar2 + -0x600,*(undefined4 *)(param_1 + 0x58));
    if (iVar2 < 1) goto LAB_0808f71a;
  }
  else {
    iVar2 = sub_08009E14(iVar2 + 0x600,*(undefined4 *)(param_1 + 0x58));
    if (-1 < iVar2) goto LAB_0808f71a;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar2;
LAB_0808f71a:
  iVar2 = *(int *)(param_1 + 0x60) + 0x15;
  *(int *)(param_1 + 0x60) = iVar2;
  if (0x700 < iVar2) {
    *(undefined4 *)(param_1 + 0x60) = 0x700;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  iVar2 = sub_08009B28(*(undefined4 *)(param_1 + 0x54));
  if (iVar2 < 0) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar2;
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  iVar2 = *(int *)(param_1 + 100) + -0x2c00;
  if ((*(int *)(param_1 + 0x54) < iVar2) ||
     (iVar2 = *(int *)(param_1 + 100) + 0x2c00, iVar2 < *(int *)(param_1 + 0x54))) {
    *(int *)(param_1 + 0x54) = iVar2;
  }
  return in_lr;
}

