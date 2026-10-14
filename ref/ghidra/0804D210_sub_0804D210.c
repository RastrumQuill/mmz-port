// sub_0804D210 at 0x0804D210 (thumb)

undefined4 sub_0804D210(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (*(char *)(iVar2 + 0xc) == '\x04') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0804D0FC(param_1);
  }
  else {
    if ((*(char *)(param_1 + 0xf) == '\0') &&
       (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\0')) {
      sub_080033F0(param_1 + 0x6c,7);
      sub_080014E8(&DAT_084b803c,(DAT_02022ea6 - 0x230) * 0x20 + 0x10000);
      sub_0800179C(&DAT_084b8048,(DAT_02022f33 - 5) * 0x20 + 0x200);
      *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    }
    if (((*(uint *)(iVar2 + 0x90) & 0x10001) == 0) && ((*(byte *)(iVar2 + 0x94) & 2) == 0)) {
      cVar1 = (&DAT_02022f30)[*(byte *)(param_1 + 9)];
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | cVar1 << 4;
      *(char *)(param_1 + 0x1e) = cVar1;
    }
    else {
      *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf | 0xd0;
      *(undefined *)(param_1 + 0x1e) = 0xd;
    }
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  return in_lr;
}

