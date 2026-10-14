// sub_0805CD30 at 0x0805CD30 (thumb)

undefined4 sub_0805CD30(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined auStack_20 [8];
  undefined auStack_18 [4];
  
  sub_08128B5C(auStack_20,&DAT_08129042,6);
  sub_08128B5C(auStack_18,&DAT_08129048,3);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_0805EE34(param_1,auStack_20[(uint)bVar1 * 2]);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_0885726c)
                       [*(ushort *)(&DAT_088573d4 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)(&DAT_08857308 + (uint)*(byte *)(param_1 + 0xb8) * 4) +
                              (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined *)(param_1 + 0xd) = auStack_18[bVar1];
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

