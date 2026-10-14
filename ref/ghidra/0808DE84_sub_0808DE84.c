// sub_0808DE84 at 0x0808DE84 (thumb)

undefined4 sub_0808DE84(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  undefined auStack_1c [4];
  
  sub_080C8D70(auStack_1c,&DAT_080c9400,2);
  sub_08088120(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,auStack_1c[*(byte *)(param_1 + 0x11) & 1]);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(int *)(param_1 + 0x54) < 1) {
    *(undefined *)(param_1 + 0x44) = 0;
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    *(undefined *)(param_1 + 0x44) = 1;
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b31bc)[*(byte *)(param_1 + 9)] + 4);
  sub_0808D910(param_1);
  return in_lr;
}

