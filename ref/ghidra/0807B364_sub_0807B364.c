// sub_0807B364 at 0x0807B364 (thumb)

undefined4 sub_0807B364(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    sub_08076590(param_1);
  }
  else {
    sub_08076674(param_1);
    *(undefined2 *)(param_1 + 0x48) = 0x180;
    *(undefined2 *)(param_1 + 0x4a) = 0x180;
    *(undefined *)(param_1 + 0x1f) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_080033F0(param_1 + 0x6c,0);
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_080055FC(param_1 + 0x74,&UNK_082b2014 + (uint)*(byte *)(param_1 + 0x13) * 0x1c,param_1 + 0x4c,
               0x40);
  *(int *)(param_1 + 0xb4) = param_1;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined *)(param_1 + 0x12) = 0;
  sub_08094064(param_1 + 0x4c,*(undefined *)(param_1 + 0x13));
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 4);
  sub_0807B430(param_1);
  return in_lr;
}

