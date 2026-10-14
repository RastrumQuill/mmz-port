// sub_0804D11C at 0x0804D11C (thumb)

undefined4 sub_0804D11C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(byte *)(iVar2 + 0xc) < 2) {
    if (((*(uint *)(iVar2 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar2 + 0x94) & 2) == 0)) {
      cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined *)(param_1 + 0x12) = 0;
      *(undefined *)(param_1 + 0xe) = 1;
    }
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x02';
    if (*(byte *)(param_1 + 0x70) != *(byte *)(iVar2 + 0x70)) {
      sub_080033F0(param_1 + 0x6c,*(byte *)(iVar2 + 0x70));
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar2 + 0x4c);
    iVar2 = sub_08008360(*(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x50));
    *(int *)(param_1 + 0x50) = iVar2 + (short)(&DAT_080c8e24)[*(byte *)(param_1 + 0x12)] * -4;
  }
  else {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0x12) = 0x3c;
    sub_0804D0E4(param_1);
  }
  return in_lr;
}

