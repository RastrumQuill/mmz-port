// sub_0808045C at 0x0808045C (thumb)

undefined4 sub_0808045C(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_082b27e4)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    sub_08076600(param_1);
    sub_080033F0(param_1 + 0x6c,*(char *)(param_1 + 0x11) + '\x02');
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b27c8,param_1 + 0x4c,0);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  }
  if (*(char *)(param_1 + 0x10) == '\x03') {
    sub_08076600(param_1);
    sub_080033F0(param_1 + 0x6c,3);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) | 0xc;
  }
  sub_08080568(param_1);
  return in_lr;
}

