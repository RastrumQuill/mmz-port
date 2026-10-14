// sub_080C11F4 at 0x080C11F4 (thumb)

undefined4 sub_080C11F4(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 in_lr;
  int local_20 [3];
  
  puVar5 = &stack0xffffffec;
  local_20[0] = 0x480;
  local_20[1] = 0x500;
  local_20[2] = 0x3c0;
  uVar6 = (uint)*(byte *)(param_1 + 0x10);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0801CF00(param_1,*(undefined2 *)(&DAT_08861dcc + uVar6 * 4));
    uVar3 = (uint)(byte)(&DAT_08861dd8)[uVar6] +
            (bVar1 >> 4 & 1) * 2 * (0x140 - (uint)(byte)(&DAT_08861dd8)[uVar6]) & 0xff;
    puVar5 = (undefined *)local_20[uVar6];
    iVar4 = (int)puVar5 * (int)*(short *)((int)&DAT_08128c10 + ((uVar3 + 0x40) * 0x1000000 >> 0x17))
    ;
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar4 >> 8;
    iVar4 = (int)puVar5 * (int)(short)(&DAT_08128c10)[uVar3];
    if (iVar4 < 0) {
      iVar4 = iVar4 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar4 >> 8;
    *(undefined *)(param_1 + 0x13) = 0x14;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1,puVar5);
  sub_08005784(param_1 + 0x74,&DAT_08861d48);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  cVar2 = *(char *)(param_1 + 0x13) + -1;
  *(char *)(param_1 + 0x13) = cVar2;
  if (cVar2 == '\0') {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

