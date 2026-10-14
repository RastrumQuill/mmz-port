// sub_0809FBA4 at 0x0809FBA4 (thumb)

undefined4 sub_0809FBA4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  
  uVar3 = *(undefined4 *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x3501);
    *(undefined4 *)(param_1 + 0x60) = 0xfffffc00;
    sub_08006E08(param_1 + 0x74,&DAT_08343f10);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x60) + 0x20;
  *(int *)(param_1 + 0x60) = iVar1;
  if (0x380 < iVar1) {
    *(undefined4 *)(param_1 + 0x60) = 0x380;
  }
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  uVar2 = sub_0809F784(param_1);
  if ((uVar2 & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((uVar2 & 8) != 0) {
    *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_24 = *(int *)(param_1 + 0x54) + -0x1300;
    local_20 = *(undefined4 *)(param_1 + 0x58);
    local_1c = *(int *)(param_1 + 0x5c);
    if (local_1c < 0) {
      local_1c = -local_1c;
    }
    local_1c = -local_1c;
    local_18 = *(undefined4 *)(param_1 + 0x60);
    sub_080A0344(uVar3,&local_24,&local_1c,0);
    local_24 = *(int *)(param_1 + 0x54) + 0x1300;
    local_20 = *(undefined4 *)(param_1 + 0x58);
    local_1c = *(int *)(param_1 + 0x5c);
    if (local_1c < 0) {
      local_1c = -local_1c;
    }
    local_18 = *(undefined4 *)(param_1 + 0x60);
    sub_080A0344(uVar3,&local_24,&local_1c,1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_08343064)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

