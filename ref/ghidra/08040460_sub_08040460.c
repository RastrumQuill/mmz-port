// sub_08040460 at 0x08040460 (thumb)

undefined4 sub_08040460(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  ushort *puVar6;
  short *psVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    iVar5 = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar5 + -0xa000;
    sub_08001EAC(0xd4);
  }
  sub_080297C0(param_1);
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    puVar6 = (ushort *)(param_1 + 0xd6);
    uVar3 = *puVar6;
    *puVar6 = (ushort)(uVar3 - 0x20);
    if (0xff < (int)((uVar3 - 0x20) * 0x10000) >> 0x10) goto LAB_0804056e;
    *puVar6 = 0x100;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        psVar7 = (short *)(param_1 + 0xd4);
        sVar4 = *psVar7;
        *psVar7 = sVar4 + 0x40;
        if (0x100 < (short)(sVar4 + 0x40)) {
          *psVar7 = 0x100;
          sub_08029654(param_1);
          sub_08029778(param_1,0x19);
          sub_080297C0(param_1);
          *(undefined *)(param_1 + 0x44) = 0;
          *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
          *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
          cVar2 = (&DAT_083a8013)
                  [(uint)*(ushort *)(param_1 + 0x1c) * 0x14 +
                   (uint)*(byte *)(param_1 + 9) * 4 + (&DAT_083a8000)[*(byte *)(param_1 + 9)]];
          *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar2 << 4;
          *(char *)(param_1 + 0x1e) = cVar2;
        }
      }
      else if ((bVar1 == 3) && ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      goto LAB_0804056e;
    }
    if (bVar1 != 0) goto LAB_0804056e;
    iVar5 = *(int *)(param_1 + 0x50) + 0xa00;
    *(int *)(param_1 + 0x50) = iVar5;
    if (iVar5 <= *(int *)(param_1 + 0xd8)) goto LAB_0804056e;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xd8);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_0804056e:
  if (*(byte *)(param_1 + 0xf) < 3) {
    *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0xd4);
    *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xd6);
  }
  return in_lr;
}

