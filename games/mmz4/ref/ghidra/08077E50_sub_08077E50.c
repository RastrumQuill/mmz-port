// sub_08077E50 at 0x08077E50 (thumb)

undefined4 sub_08077E50(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  char local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  
  sub_08128B5C(local_20,&DAT_081292e2,3);
  cVar1 = *(char *)(param_1 + 0xc5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    sub_08002B10(0x192);
    iVar2 = 0;
    do {
      local_1c = *(undefined4 *)(param_1 + 0x54);
      local_18 = *(undefined4 *)(param_1 + 0x58);
      sub_080CDDE0(param_1,&local_1c,0,local_20[iVar2] + cVar1 * '\x02' * ('@' - local_20[iVar2]));
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    sub_08078ED4(param_1,0);
    *(undefined4 *)(param_1 + 0x5c) = 500;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  sub_0801CFF0(param_1);
  sub_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                (&DAT_08859dac)[*(ushort *)(&DAT_08859db4 + (uint)*(byte *)(param_1 + 0xc4) * 2)]));
  sub_08078E20(param_1);
  if ((*(int *)(param_1 + 0x5c) == 0) ||
     (iVar2 = *(int *)(param_1 + 0x5c) + -1, *(int *)(param_1 + 0x5c) = iVar2, iVar2 == 0)) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

