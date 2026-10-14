// sub_0807DBE0 at 0x0807DBE0 (thumb)

undefined4 sub_0807DBE0(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_0800471C(0x108);
    sub_080177CC(param_1,*(undefined2 *)
                          (&DAT_08364522 + ((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2)),
                 *(undefined *)(param_1 + 0x71),3);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  if ((*(char *)(param_1 + 0x10) == '\x01') &&
     (uVar1 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), 0x4000 < uVar1)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  sub_080177F4(param_1);
  return in_lr;
}

