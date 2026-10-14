// sub_08040324 at 0x08040324 (thumb)

undefined8 sub_08040324(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    uVar2 = (param_3 & 0xff) * 0xd + (uint)(byte)(&DAT_080fea04)[param_2 & 0xff];
  }
  else {
    uVar2 = (uint)(byte)(&DAT_080fea04)[param_2 & 0xff] + (param_3 & 0xff) * -0xd;
  }
  uVar2 = uVar2 & 0xff;
  local_1c = (int)(short)(&DAT_080fe64c)[uVar2];
  iVar1 = (int)*(short *)((int)&DAT_080fe64c + ((uVar2 + 0x40) * 0x1000000 >> 0x17));
  local_18 = -iVar1;
  local_14 = *(int *)(param_1 + 0x54) + (local_1c * 0x1800 >> 8);
  local_10 = *(int *)(param_1 + 0x58) + (iVar1 * -0x1800 >> 8) + -0x1c00;
  iVar1 = sub_0809E038(param_1,&local_14,&local_1c,uVar2 + 0x80 & 0xff);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xbc) = param_4;
  }
  return CONCAT44(in_lr,1);
}

