// sub_0808219C at 0x0808219C (thumb)

undefined4 sub_0808219C(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  int local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080033F0(param_1 + 0x6c,1);
    *(undefined4 *)(param_1 + 0x58) = 0xfffffc00;
    sub_0800561C(param_1 + 0x74,&DAT_082b2958);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar1 = *(int *)(param_1 + 0x58) + 0x20;
  *(int *)(param_1 + 0x58) = iVar1;
  if (0x380 < iVar1) {
    *(undefined4 *)(param_1 + 0x58) = 0x380;
  }
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  uVar2 = sub_08081D00(param_1);
  if ((uVar2 & 1) != 0) {
    *(undefined *)(param_1 + 0xd) = 1;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  if ((uVar2 & 8) != 0) {
    *(int *)(param_1 + 0x58) = -*(int *)(param_1 + 0x58);
  }
  sub_08003458(param_1 + 0x6c);
  *(undefined *)(param_1 + 0x46) =
       *(undefined *)
        (*(char *)(param_1 + 0x71) * 4 +
        *(int *)((uint)*(byte *)(param_1 + 0x70) * 4 + *(int *)(param_1 + 0x6c)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    local_28 = *(int *)(param_1 + 0x4c) + -0x1300;
    local_24 = *(undefined4 *)(param_1 + 0x50);
    local_20 = *(int *)(param_1 + 0x54);
    if (local_20 < 0) {
      local_20 = -local_20;
    }
    local_20 = -local_20;
    local_1c = *(undefined4 *)(param_1 + 0x58);
    sub_08082614(uVar3,&local_28,&local_20,0);
    local_28 = *(int *)(param_1 + 0x4c) + 0x1300;
    local_24 = *(undefined4 *)(param_1 + 0x50);
    local_20 = *(int *)(param_1 + 0x54);
    if (local_20 < 0) {
      local_20 = -local_20;
    }
    local_1c = *(undefined4 *)(param_1 + 0x58);
    sub_08082614(uVar3,&local_28,&local_20,1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_082b17b0)[*(byte *)(param_1 + 9)] + 0xc)
    ;
  }
  return in_lr;
}

