// sub_0805651C at 0x0805651C (thumb)

undefined4 sub_0805651C(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  iVar5 = *(int *)(param_1 + 0x20);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined *)(param_1 + 0x12) = 6;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 == '\0') {
        DAT_02022ad5 = DAT_02022ad5 | 0x10;
        sub_08015698(0xe,param_1 + 0x4c);
        *(undefined4 *)(param_1 + 0xc) = 4;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
        puVar4 = (uint *)(iVar5 + 0xbc);
        *puVar4 = *puVar4 | 0x400;
        sub_08001EAC(2);
      }
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      local_1c = *(int *)(param_1 + 0x4c) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      local_18 = *(int *)(param_1 + 0x50) + ((uVar3 * 2 >> 0x11 & 0xf) - 8) * 0x100;
      sub_0808827C(1,&local_1c);
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined *)(param_1 + 0x12) = 0xa8;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar1 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar1;
  if ((bVar1 < 0x2f) && (*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x60) < 0x800)) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  return in_lr;
}

