// sub_0811BBA0 at 0x0811BBA0 (thumb)

undefined4 sub_0811BBA0(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x63a8);
  uVar3 = (uint)*(byte *)(iVar2 + 0xf4);
  if (*(char *)(iVar2 + 0xc5) == '\x12') {
    uVar3 = uVar3 + 1;
  }
  sVar1 = FUN_081288bc(uVar3,10);
  *(ushort *)(param_1 + 0x17cc) = sVar1 + 0x241U | 0xa000;
  *(ushort *)(param_1 + 0x180c) = sVar1 + 0x261U | 0xa000;
  uVar3 = (uint)*(byte *)(iVar2 + 0xf4);
  if (*(char *)(iVar2 + 0xc5) == '\x12') {
    uVar3 = uVar3 + 1;
  }
  sVar1 = sub_08128954(uVar3,10);
  *(ushort *)(param_1 + 0x17ce) = sVar1 + 0x241U | 0xa000;
  *(ushort *)(param_1 + 0x180e) = sVar1 + 0x261U | 0xa000;
  sVar1 = FUN_081288bc((uint)*(byte *)(iVar2 + 0xf1) + (uint)*(byte *)(iVar2 + 0xf2) +
                       (uint)*(byte *)(iVar2 + 0xf3),10);
  *(ushort *)(param_1 + 0x184c) = sVar1 + 0x241U | 0xa000;
  *(ushort *)(param_1 + 0x188c) = sVar1 + 0x261U | 0xa000;
  sVar1 = sub_08128954((uint)*(byte *)(iVar2 + 0xf1) + (uint)*(byte *)(iVar2 + 0xf2) +
                       (uint)*(byte *)(iVar2 + 0xf3),10);
  *(ushort *)(param_1 + 0x184e) = sVar1 + 0x241U | 0xa000;
  *(ushort *)(param_1 + 0x188e) = sVar1 + 0x261U | 0xa000;
  sub_08001F1C(param_1 + 0xed8,(DAT_02000a06 & 0x1f00) << 3,0x1000);
  return in_lr;
}

