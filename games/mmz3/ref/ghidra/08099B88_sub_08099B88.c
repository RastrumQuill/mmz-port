// sub_08099B88 at 0x08099B88 (thumb)

undefined4 sub_08099B88(int param_1)

{
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = (&DAT_08366f32)[*(byte *)(param_1 + 0x10)];
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801749C(param_1);
  if (*(char *)(param_1 + 0x10) != '\x06') {
    sub_08017700(param_1,*(undefined2 *)(&DAT_08366f3a + (uint)*(byte *)(param_1 + 0x10) * 2));
  }
  sub_080177F4(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  sub_0800736C(param_1 + 0x74,&DAT_08366e9c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0x8099b35;
  sub_08099C18(param_1);
  return in_lr;
}

