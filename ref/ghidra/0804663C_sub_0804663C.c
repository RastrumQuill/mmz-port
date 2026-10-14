// sub_0804663C at 0x0804663C (thumb)

undefined4 sub_0804663C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar8 = *(int *)(param_1 + 0x24);
  iVar7 = *(int *)(param_1 + 0xd8);
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,8);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(undefined *)(param_1 + 0x13) = 0;
    *(undefined *)(param_1 + 0xc9) = 4;
    *(undefined *)(iVar8 + 0x11) = 4;
    *(undefined *)(iVar7 + 0xd) = 6;
    *(undefined *)(iVar7 + 0xe) = 0;
    sub_080014E8(&DAT_0850058c,(DAT_0202309e - 0x210) * 0x20 + 0x10000);
    sub_0800179C(&DAT_08500598,(DAT_02023107 - 8) * 0x20 + 0x200);
    sub_08098D80(param_1,0,0);
    sub_08098D80(param_1,1,0);
    sub_08098D80(param_1,2,0);
    sub_08098D80(param_1,3,0);
    sub_08098D80(param_1,4,0);
    sub_08098D80(param_1,5,0);
    sub_08001EE8((int)*(short *)(param_1 + 0xd2));
  }
  sub_080297C0(param_1);
  bVar2 = *(byte *)(param_1 + 0xf);
  if (bVar2 == 1) {
    iVar7 = *(int *)(param_1 + 0x50) + 0x30;
    *(int *)(param_1 + 0x50) = iVar7;
    if ((*(byte *)(param_1 + 0x13) & 1) != 0) {
      uVar4 = DAT_02022890 * 0x343fd + 0x269ec3;
      uVar5 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      uVar6 = (uVar5 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_02022890 = uVar6 & 0x7fffffff;
      sub_08079640(*(int *)(param_1 + 0x4c) + ((uVar4 * 2 >> 0x11 & 0x1f) - 0x10) * 0x100,
                   iVar7 + ((uVar5 * 2 >> 0x11 & 0x3f) - 0x20) * 0x100,3,uVar6 * 2 >> 0x11 & 0xff);
    }
    cVar1 = sub_080C8CB0(*(undefined *)(param_1 + 0x13),0x12);
    if (cVar1 == '\0') {
      sub_08001EAC(2);
    }
    bVar2 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    if ((bVar2 & 3) < 2) {
      cVar1 = (&DAT_083a8013)
              [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
               (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
      uVar3 = 4;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      uVar3 = 0xd;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    *(undefined *)(param_1 + 0xc9) = uVar3;
    if (0x40 < *(byte *)(param_1 + 0x13)) {
      sub_08029778(param_1,0xc);
      sub_080297C0(param_1);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      *(undefined *)(param_1 + 0x13) = 0;
      sub_08045474(param_1,1);
      sub_08045474(param_1,2);
    }
  }
  else if (bVar2 < 2) {
    if (bVar2 == 0) {
      cVar1 = *(char *)(param_1 + 0x13) + '\x01';
      *(char *)(param_1 + 0x13) = cVar1;
      if (cVar1 == *(char *)(param_1 + 0x12)) {
        *(undefined *)(param_1 + 0x13) = 0;
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
        *(undefined *)(param_1 + 0x1e) = 0xd;
        *(undefined *)(param_1 + 0xc9) = 0xd;
        if (*(byte *)(param_1 + 0x12) < 2) {
          *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
          *(undefined *)(param_1 + 0x13) = 0;
        }
      }
      else {
        cVar1 = (&DAT_083a8013)
                [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
                 (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
        *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
        *(char *)(param_1 + 0x1e) = cVar1;
        *(undefined *)(param_1 + 0xc9) = 4;
      }
    }
  }
  else if (bVar2 == 2) {
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 0x30;
    bVar2 = *(char *)(param_1 + 0x13) + 1;
    *(byte *)(param_1 + 0x13) = bVar2;
    if ((bVar2 & 3) < 2) {
      cVar1 = (&DAT_083a8013)
              [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
               (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
      uVar3 = 4;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      uVar3 = 0xd;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    *(undefined *)(param_1 + 0xc9) = uVar3;
    if (0x60 < *(byte *)(param_1 + 0x13)) {
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 1;
    }
  }
  return in_lr;
}

