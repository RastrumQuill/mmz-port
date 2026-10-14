// sub_0809E254 at 0x0809E254 (thumb)

undefined4 sub_0809E254(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_20;
  undefined4 local_1c;
  
  iVar3 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x58);
  *(int *)(param_1 + 0x50) = iVar3;
  cVar1 = sub_080079CC(*(undefined4 *)(param_1 + 0x4c),iVar3 + 0x40);
  if (cVar1 == '\0') {
    sub_0800561C(param_1 + 0x74,&DAT_082b54b0);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    if (*(int *)(param_1 + 0x58) < 0x700) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x40;
    }
  }
  else if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    local_1c = sub_08008360(*(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = local_1c;
    local_20 = *(int *)(param_1 + 0x4c) + -0x1000;
    uVar4 = 0;
    do {
      sub_0808827C(3,&local_20);
      local_20 = *(int *)(param_1 + 0x4c) + 0x800;
      uVar2 = uVar4 * 0x10000 + 0x10000;
      uVar4 = uVar2 >> 0x10;
    } while ((int)uVar2 >> 0x10 < 5);
    sub_0800561C(param_1 + 0x74,&DAT_082b54cc);
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
    *(undefined **)(param_1 + 0x28) = &DAT_082b54e8;
    sub_08001EAC(10);
    sub_0801412C(4,param_1 + 0x4c);
  }
  sub_0809C980(param_1);
  if (((*(ushort *)(undefined4 *)(param_1 + 0x90) & 0x44) != 0) || ((DAT_02022b64 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0x87;
    sub_0809C930(param_1,4);
    *(byte *)(param_1 + 0x41) = *(byte *)(param_1 + 0x41) & 0xf3 | 4;
    *(undefined4 *)(param_1 + 0x58) = 0;
    sub_08001EAC(10);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809E3A8(param_1);
  }
  return in_lr;
}

