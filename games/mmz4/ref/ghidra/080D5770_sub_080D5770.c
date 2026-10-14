// sub_080D5770 at 0x080D5770 (thumb)

undefined4 sub_080D5770(int param_1)

{
  undefined uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    DAT_02000a50 = DAT_02000a50 | 0x4000;
    DAT_02000a5d = 0x31;
    DAT_02000a5e = DAT_02000a5e | 0xe;
    *(undefined *)(param_1 + 0x74) = 0;
    *(undefined *)(param_1 + 0x75) = 0;
    *(undefined *)(param_1 + 0x76) = 0;
    *(undefined *)(param_1 + 0x7a) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if ((DAT_02000766 & 0x200) == 0) {
    if ((DAT_02000766 & 0x100) == 0) goto LAB_080d57ea;
    iVar3 = *(byte *)(param_1 + 0x7a) + 1;
  }
  else {
    iVar3 = *(byte *)(param_1 + 0x7a) + 2;
  }
  uVar1 = sub_08128954(iVar3,3);
  *(undefined *)(param_1 + 0x7a) = uVar1;
LAB_080d57ea:
  bVar2 = *(byte *)(param_1 + 0x7a);
  if (bVar2 == 1) {
    piVar4 = (int *)(param_1 + 100);
  }
  else if ((bVar2 < 2) && (bVar2 == 0)) {
    piVar4 = (int *)(param_1 + 0x54);
  }
  else {
    piVar4 = (int *)(param_1 + 0x5c);
  }
  if ((DAT_02000766 & 0x40) != 0) {
    piVar4[1] = piVar4[1] + -0x100;
  }
  if ((DAT_02000766 & 0x80) != 0) {
    piVar4[1] = piVar4[1] + 0x100;
  }
  if ((DAT_02000766 & 0x20) != 0) {
    *piVar4 = *piVar4 + -0x100;
  }
  if ((DAT_02000766 & 0x10) != 0) {
    *piVar4 = *piVar4 + 0x100;
  }
  bVar2 = *(char *)(param_1 + 0x13) + 1;
  *(byte *)(param_1 + 0x13) = bVar2;
  if ((bVar2 & 1) == 0) {
    uVar1 = 0x18;
    *(undefined *)(param_1 + 0x74) = 0x18;
    *(undefined *)(param_1 + 0x75) = 0x1f;
  }
  else {
    uVar1 = 0x1f;
    *(undefined *)(param_1 + 0x74) = 0x1f;
    *(undefined *)(param_1 + 0x75) = 0x1f;
  }
  *(undefined *)(param_1 + 0x76) = uVar1;
  return in_lr;
}

