// sub_0807E1E8 at 0x0807E1E8 (thumb)

undefined4 sub_0807E1E8(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  undefined4 local_24;
  int local_20;
  
  if (*(char *)(param_1 + 0xbd) == '\x01') {
    sub_080B7330(param_1,3,0);
  }
  else if (*(char *)(param_1 + 0xbd) == '\x02') {
    local_24 = *(undefined4 *)(param_1 + 0x54);
    local_20 = *(int *)(param_1 + 0x58) + -0x800;
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    sub_080B7F60(&local_24,2,uVar1 * 2 >> 0x11 & 1);
    local_20 = local_20 + -0x800;
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    sub_080B7F60(&local_24,2,uVar1 * 2 >> 0x11 & 1);
    local_20 = local_20 + -0x800;
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    sub_080B7F60(&local_24,2,uVar1 * 2 >> 0x11 & 1);
    local_20 = local_20 + -0x800;
    uVar1 = DAT_0202e188 * 0x343fd + 0x269ec3;
    DAT_0202e188 = uVar1 & 0x7fffffff;
    sub_080B7F60(&local_24,2,uVar1 * 2 >> 0x11 & 1);
    sub_080032EC(0x3f);
  }
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  return in_lr;
}

