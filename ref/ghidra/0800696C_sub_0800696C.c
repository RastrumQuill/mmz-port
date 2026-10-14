// sub_0800696C at 0x0800696C (thumb)

undefined4 sub_0800696C(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  iVar1 = param_1 + 0x14;
  local_28 = (*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x34) >> 8) + *(int *)(param_1 + 0x4c);
  local_24 = (*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x38) >> 8) + *(int *)(param_1 + 0x50);
  local_20 = (*(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x3c) >> 8) + *(int *)(param_1 + 0x4c);
  local_1c = (*(int *)(param_1 + 0x48) * *(int *)(param_1 + 0x40) >> 8) + *(int *)(param_1 + 0x50);
  uVar2 = (local_28 - local_20) + 0xf;
  uVar3 = (local_24 - local_1c) + 0xf;
  local_28 = (*(int *)(param_1 + 0x2c) >> 8) + local_28;
  local_24 = (*(int *)(param_1 + 0x30) >> 8) + local_24;
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (((uVar2 < 0x1f) && (uVar3 < 0x1f)) && (DAT_02021644 == 0)) {
      sub_0800507C(iVar1,&local_28,&DAT_0202165c,&DAT_0200543c);
    }
    else {
      DAT_02021644 = 0;
      sub_08004ED8(iVar1,&local_28,&DAT_0202165c,&DAT_0200543c);
    }
  }
  else if ((uVar2 < 0x1f) && (uVar3 < 0x1f)) {
    sub_08003560(iVar1,&local_28,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0x1f00) * 8 + 0x6000000)
    ;
  }
  else {
    sub_08003F1C(iVar1,&local_28,
                 ((ushort)(&DAT_02004f34)[*(uint *)(param_1 + 0x54) >> 4] & 0x1f00) * 8 + 0x6000000)
    ;
  }
  sub_0800527C(iVar1,&DAT_02004f3c + (*(uint *)(param_1 + 0x54) >> 4));
  return in_lr;
}

