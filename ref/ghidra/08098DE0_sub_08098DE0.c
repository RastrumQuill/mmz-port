// sub_08098DE0 at 0x08098DE0 (thumb)

undefined4 sub_08098DE0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  byte abStack_18 [8];
  
  sub_080C8D70(abStack_18,&DAT_080c94a4,6);
  sub_08088120(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,*(byte *)(param_1 + 0x10) & 0xfe);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x10) & 1;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined *)(param_1 + 0x12) = 0;
  *(ushort *)(param_1 + 0x7e) = (ushort)abStack_18[*(byte *)(param_1 + 0x10)];
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_08098EAC(param_1);
  return in_lr;
}

