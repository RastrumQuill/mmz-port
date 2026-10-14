// sub_08062B58 at 0x08062B58 (thumb)

undefined4 sub_08062B58(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  byte abStack_28 [8];
  int local_20;
  int local_1c;
  
  sub_08128B5C(abStack_28,&DAT_08129118,4);
  sub_08128B5C(abStack_28 + 4,&DAT_0812911c,4);
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x10c);
    iVar3 = (uint)(0x7ffe < (*(int *)(DAT_0202dbf0 + 0x54) - *(int *)(param_1 + 0x54)) + 0x3fffU) *
            2;
    sub_08066308(abStack_28 + 4 + iVar3,2);
    iVar4 = (bVar1 >> 4 & 1) * 2;
    local_20 = *(int *)(param_1 + 0x54) + (iVar4 + -1) * 0x800;
    local_1c = *(int *)(param_1 + 0x58) + -0x1000;
    sub_080C6DE4(param_1,&local_20,
                 (uint)abStack_28[iVar3] + iVar4 * (0x140 - (uint)abStack_28[iVar3]) & 0xff);
    sub_080C6DE4(param_1,&local_20,
                 (uint)abStack_28[iVar3 + 1] + iVar4 * (0x140 - (uint)abStack_28[iVar3 + 1]) & 0xff)
    ;
    sub_08065A40(param_1,6);
    *(undefined *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_08857a44)
                       [*(ushort *)(&DAT_08857b64 + (uint)*(byte *)(param_1 + 0xb4) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb4) * 4 +
                                       *(int *)(&DAT_08857b5c + (uint)*(byte *)(param_1 + 0xb5) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  if (((*(char *)(param_1 + 0x12) == '\0') ||
      (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

