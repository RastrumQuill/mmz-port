// sub_0806F268 at 0x0806F268 (thumb)

undefined4 sub_0806F268(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\x02') {
    if ((DAT_0202f5c0 != 0) && ((*(ushort *)(DAT_0202f5c0 + 0x216) & 0x8000) != 0)) {
      return in_lr;
    }
  }
  else if ((DAT_02030108 & 0x40) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if (*(char *)(param_1 + 0xc2) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xbc);
  if ((CONCAT11(*(undefined *)(param_1 + 0x1e),*(undefined *)(param_1 + 0x70)) != 0x1503) &&
     ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    if (*piVar2 != 0) goto LAB_0806f342;
    iVar1 = sub_080253D8(0,param_1,&UNK_08363198 + (uint)*(byte *)(param_1 + 0x10) * 8);
    *piVar2 = iVar1;
    if (iVar1 == 0) goto LAB_0806f394;
    sub_08007390(param_1 + 0x74,&DAT_08363150 + (*(byte *)(param_1 + 0x10) & 2) * 0x18);
  }
  if (*piVar2 == 0) {
LAB_0806f394:
    iVar1 = sub_08063614(param_1);
    if (iVar1 != 0) {
      return in_lr;
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363128 + (uint)*(byte *)(param_1 + 0x10) * 4));
    return in_lr;
  }
LAB_0806f342:
  sub_08017700(param_1,0x1500);
  sub_080177F4(param_1);
  iVar1 = sub_08025794(*piVar2);
  if (iVar1 != 0) {
    *piVar2 = 0;
    sub_08007390(param_1 + 0x74,&DAT_08363138 + (*(byte *)(param_1 + 0x10) & 2) * 0x18);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

