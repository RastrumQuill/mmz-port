// sub_08045064 at 0x08045064 (thumb)

undefined4 sub_08045064(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  sub_08002638(&DAT_08432f08,(DAT_0202e5c4 - 0x210) * 0x20 + 0x10000);
  sub_08002AEC(&DAT_08432f14,(DAT_0202e3c4 - 5) * 0x20 + 0x200);
  sub_08012580(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_080127D0(param_1);
  sub_080127E4(param_1,0xa000);
  sub_080128D4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803F9E4(param_1,&DAT_0833a980,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x8046335;
  *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
  uVar1 = sub_080093C4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = sub_0800958C(uVar1,*(undefined4 *)(param_1 + 0x58));
  uVar1 = sub_08009774(uVar1,iVar2 + 0x800);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  iVar2 = sub_0800958C(uVar1,*(undefined4 *)(param_1 + 0x58));
  uVar1 = sub_08009684(uVar1,iVar2 + 0x800);
  *(undefined4 *)(param_1 + 0xe0) = uVar1;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined *)(param_1 + 0xbd) = 1;
  *(undefined2 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  *(undefined *)(param_1 + 0xbf) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_080451A4(param_1);
  return in_lr;
}

