// sub_0805C9F0 at 0x0805C9F0 (thumb)

undefined4 sub_0805C9F0(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined auStack_18 [8];
  
  sub_08128B5C(auStack_18,&DAT_08129036,6);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08001D30(&DAT_08c44668,(DAT_0202e0e4 - 0x36b) * 0x20 + 0x10000);
    sub_08002208(&DAT_08c44674,(DAT_0202dee4 - 6) * 0x20 + 0x200);
    uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
    DAT_0202dc38 = uVar2 & 0x7fffffff;
    *(byte *)(param_1 + 0xbb) = (byte)(uVar2 * 2 >> 0x11) & 3;
    *(undefined *)(param_1 + 0xbc) = 0;
    sub_0805EE34(param_1,auStack_18[(uint)bVar1 * 2]);
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
    *(undefined *)(param_1 + 0xe) = 1;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

