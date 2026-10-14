// sub_08063494 at 0x08063494 (thumb)

undefined4 sub_08063494(int param_1)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08065A40(param_1,0xb);
    iVar4 = (bVar2 >> 4 & 1) * 2 + -1;
    *(int *)(param_1 + 0x5c) = iVar4 * 0x200;
    uVar1 = FUN_081288bc((*(int *)(*(int *)(param_1 + 0xc4) + 0x54) + iVar4 * -0xa00) -
                         *(int *)(param_1 + 0x54));
    *(undefined *)(param_1 + 0x12) = uVar1;
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
  sub_08005784(param_1 + 0x74,&DAT_08857710);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (cVar3 == '\0') {
    *(undefined *)(param_1 + 0xe) = 5;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

