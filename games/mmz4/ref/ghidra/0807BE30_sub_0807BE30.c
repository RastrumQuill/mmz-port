// sub_0807BE30 at 0x0807BE30 (thumb)

undefined4 sub_0807BE30(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  byte local_34 [8];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  sub_08128B5C(local_34,"|qg\\QG<1",8);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x143);
    sub_08001D30(&DAT_08c44e10,(DAT_0202e1a8 - 0x2c4) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44e1c,(DAT_0202dfa8 - 5) * 0x20 + 0x200);
    iVar4 = (bVar1 >> 4 & 1) * 2;
    local_2c = *(int *)(param_1 + 0x54) + (iVar4 + -1) * 0x2000;
    local_28 = *(int *)(param_1 + 0x58) + -0xc00;
    uVar5 = 0;
    do {
      uVar3 = (uint)local_34[uVar5] + (0x140 - (uint)local_34[uVar5]) * iVar4 & 0xff;
      local_24 = *(short *)((int)&DAT_08128c10 + ((uVar3 + 0x40) * 0x1000000 >> 0x17)) * 0x3c0;
      if (local_24 < 0) {
        local_24 = local_24 + 0xff;
      }
      local_24 = local_24 >> 8;
      local_20 = (short)(&DAT_08128c10)[uVar3] * 0x3c0;
      if (local_20 < 0) {
        local_20 = local_20 + 0xff;
      }
      local_20 = local_20 >> 8;
      sub_080B5348(param_1,&local_2c,&local_24,uVar5 & 0xff);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 8);
    sub_0807E7E0(param_1,10);
    *(undefined *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    sub_0801CFF0(param_1);
  }
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_0885a29c)[*(ushort *)(&DAT_0885a2a8 + (uint)*(byte *)(param_1 + 0xbc) * 2)]));
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

