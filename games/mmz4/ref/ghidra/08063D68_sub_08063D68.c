// sub_08063D68 at 0x08063D68 (thumb)

undefined4 sub_08063D68(int param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  char local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  
  sub_08128B5C(local_24,&DAT_08129158,4);
  bVar3 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x10e);
    local_20 = *(undefined4 *)(param_1 + 0x54);
    local_1c = *(undefined4 *)(param_1 + 0x58);
    iVar2 = 0;
    do {
      sub_080C72E4(param_1,&local_20,bVar3,
                   local_24[iVar2] + bVar3 * '\x02' * ('@' - local_24[iVar2]));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    sub_08065A40(param_1,0xf);
    *(undefined *)(param_1 + 0x12) = 0x30;
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
      (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) &&
     (*(char *)(param_1 + 0x73) == '\x03')) {
    *(undefined *)(param_1 + 0xe) = 2;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

