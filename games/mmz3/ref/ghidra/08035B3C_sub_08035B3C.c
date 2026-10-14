// sub_08035B3C at 0x08035B3C (thumb)

undefined4 sub_08035B3C(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  sub_0801749C();
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0x4c) = 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) | 0x10;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x14;
  sub_0800736C(param_1 + 0x74,&DAT_0835b39c,param_1 + 0x54,0x20);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  uVar1 = sub_0800A1F4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835ab9c + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  uVar1 = sub_080C7C78(param_1,&local_1c,0);
  *(undefined4 *)(param_1 + 0x284) = uVar1;
  uVar1 = sub_080C7C78(param_1,&local_1c,1);
  *(undefined4 *)(param_1 + 0x280) = uVar1;
  uVar1 = sub_080C7C78(param_1,&local_1c,2);
  *(undefined4 *)(param_1 + 0x288) = uVar1;
  *(undefined *)(param_1 + 0x27d) = 3;
  sub_08035C1C(param_1);
  return in_lr;
}

