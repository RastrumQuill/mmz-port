// sub_080728F8 at 0x080728F8 (thumb)

undefined4 sub_080728F8(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  undefined auStack_14 [4];
  
  sub_08128B5C(auStack_14,&DAT_08129266,3);
  bVar1 = *(byte *)(param_1 + 0xc3);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_080735E0(param_1,0);
    *(undefined *)(param_1 + 0x12) = auStack_14[bVar1];
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(int *)(*(char *)(param_1 + 0x71) * 4 +
                       (&DAT_088595cc)
                       [*(ushort *)(&DAT_088596c8 + (uint)*(byte *)(param_1 + 0xb8) * 2)]) +
               (uint)*(byte *)(*(int *)((uint)*(byte *)(param_1 + 0xb8) * 4 +
                                       *(int *)(&DAT_088596c0 + (uint)*(byte *)(param_1 + 0xb9) * 4)
                                       ) + (int)*(char *)(param_1 + 0x71)) * 0x18);
  sub_08073984(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

