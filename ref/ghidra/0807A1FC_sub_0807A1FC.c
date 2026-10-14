// sub_0807A1FC at 0x0807A1FC (thumb)

undefined4 sub_0807A1FC(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x20) + 0xe) != '\0') {
    sub_080033F0(param_1 + 0x6c,5);
    sub_08003458(param_1 + 0x6c);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b1ebc,param_1 + 0x4c,0xff);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  iVar1 = param_1 + 0x6c;
  if (*(char *)(param_1 + 0xe) != '\0') {
    if (*(byte *)(param_1 + 0x11) < 4) {
      sub_080033F0(iVar1,10);
    }
    else {
      sub_080033F0(iVar1,6);
    }
    sub_08003458(iVar1);
    *(undefined *)(param_1 + 0x46) =
         *(undefined *)
          (*(char *)(param_1 + 0x71) * 4 +
          *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    sub_080033F0(iVar1,5);
  }
  sub_08003458(iVar1);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  return in_lr;
}

