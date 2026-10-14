// sub_0808342C at 0x0808342C (thumb)

undefined4 sub_0808342C(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined auStack_10 [4];
  
  sub_080C8D70(auStack_10,&DAT_080c93d0,4);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  cVar1 = sub_080079CC();
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 8);
    sub_0809C368(auStack_10[*(byte *)(param_1 + 0x10)],*(undefined4 *)(param_1 + 0x4c),
                 *(undefined4 *)(param_1 + 0x50),0 < *(int *)(param_1 + 0x54));
  }
  return in_lr;
}

