// sub_0809A284 at 0x0809A284 (thumb)

undefined4 sub_0809A284(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xd) == '\0') {
    bVar2 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    if (*(byte *)(param_1 + 0x12) < bVar2) {
      *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) - 1;
      *(undefined *)(param_1 + 0x13) = 0;
      *(ushort *)(iVar4 + 0x90) = *(ushort *)(iVar4 + 0x90) | 1;
      *(byte *)(iVar4 + 0x41) = *(byte *)(iVar4 + 0x41) & 0xf | 0xd0;
      *(undefined *)(iVar4 + 0x1e) = 0xd;
      *(undefined *)(param_1 + 0x11) = 1;
    }
    else {
      *(ushort *)(iVar4 + 0x90) = *(ushort *)(iVar4 + 0x90) & 0xfffe;
      cVar1 = (&DAT_083a8013)
              [(uint)*(ushort *)(iVar4 + 0x1c) * 0x14 +
               (uint)*(byte *)(iVar4 + 9) * 4 + (&DAT_083a8000)[*(byte *)(iVar4 + 9)]];
      *(byte *)(iVar4 + 0x41) = *(byte *)(iVar4 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(iVar4 + 0x1e) = cVar1;
      *(undefined *)(param_1 + 0x11) = 0;
    }
    if (*(byte *)(param_1 + 0x12) < 2) {
      *(undefined4 *)(param_1 + 0x74) = 0x80;
      sub_08001EAC(0xc0);
      sub_080014E8(&DAT_08500618,(DAT_020230ac - 0x1d0) * 0x20 + 0x10000);
      sub_0800179C(&DAT_08500624,(DAT_0202310e - 0xf) * 0x20 + 0x200);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else if (*(char *)(param_1 + 0xd) == '\x01') {
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    if ((bVar2 & 3) < 2) {
      *(ushort *)(iVar4 + 0x90) = *(ushort *)(iVar4 + 0x90) & 0xfffe;
      cVar1 = (&DAT_083a8013)
              [(uint)*(ushort *)(iVar4 + 0x1c) * 0x14 +
               (uint)*(byte *)(iVar4 + 9) * 4 + (&DAT_083a8000)[*(byte *)(iVar4 + 9)]];
      *(byte *)(iVar4 + 0x41) = *(byte *)(iVar4 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(iVar4 + 0x1e) = cVar1;
      *(undefined *)(param_1 + 0x11) = 0;
    }
    else {
      *(ushort *)(iVar4 + 0x90) = *(ushort *)(iVar4 + 0x90) | 1;
      *(byte *)(iVar4 + 0x41) = *(byte *)(iVar4 + 0x41) & 0xf | 0xd0;
      *(undefined *)(iVar4 + 0x1e) = 0xd;
      *(undefined *)(param_1 + 0x11) = 1;
    }
    if (*(int *)(param_1 + 0x74) == 0x28) {
      sub_08048828(param_1);
    }
    iVar4 = sub_080C8B68(*(undefined4 *)(param_1 + 0x74),0x12);
    if (iVar4 == 0) {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      local_20 = *(int *)(param_1 + 0x4c) + (0x40 - (uVar3 * 2 >> 0x11 & 0x7f)) * 0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      local_1c = *(int *)(param_1 + 0x50) + (0x40 - (uVar3 * 2 >> 0x11 & 0x7f)) * 0x100;
      sub_0808827C(1,&local_20);
    }
    iVar4 = sub_080C8B68(*(undefined4 *)(param_1 + 0x74),0x12);
    if (iVar4 == 9) {
      uVar3 = DAT_02022890 * 0x343fd + 0x269ec3;
      local_20 = *(int *)(param_1 + 0x4c) + (0x10 - (uVar3 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      local_1c = *(int *)(param_1 + 0x50) + (0x10 - (uVar3 * 2 >> 0x11 & 0x1f)) * 0x100;
      uVar3 = (uVar3 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar3 & 0x7fffffff;
      sub_08079640(local_20,local_1c,3,uVar3 * 2 >> 0x11 & 0xff);
    }
    iVar4 = sub_080C8B68(*(undefined4 *)(param_1 + 0x74),0x12);
    if (iVar4 == 0) {
      sub_08001EAC(0xe1);
    }
    if ((*(uint *)(param_1 + 0x74) & 1) == 0) {
      sub_08099FFC(param_1,*(byte *)(param_1 + 0x12) >> 1 & 3);
    }
    iVar4 = *(int *)(param_1 + 0x74);
    *(int *)(param_1 + 0x74) = iVar4 + -1;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 8)
      ;
      *(undefined *)(param_1 + 0x12) = 0;
    }
  }
  return in_lr;
}

