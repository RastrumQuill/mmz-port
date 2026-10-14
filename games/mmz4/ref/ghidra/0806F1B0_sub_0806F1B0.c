// sub_0806F1B0 at 0x0806F1B0 (thumb)

/* WARNING: Removing unreachable block (ram,0x0806f21e) */

undefined4 sub_0806F1B0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  local_34 = 0xad08;
  uStack_30 = 0xad06;
  uStack_2c = 0xad05;
  local_28 = 0xad04;
  uStack_24 = 0xad07;
  uStack_20 = 0xad09;
  local_1c = 0xad0a;
  uStack_18 = 0xad0b;
  bVar1 = *(byte *)(param_1 + 0xc4);
  if ((DAT_0202e918 & 8) == 0) {
    uVar2 = sub_0810CD50(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),
                         *(undefined4 *)(DAT_0202dbf0 + 0x54),
                         *(int *)(DAT_0202dbf0 + 0x58) + -0x1000);
    bVar1 = sub_0810CD7C(uVar2,bVar1,8);
    sub_0801CF00(param_1,*(undefined2 *)
                          ((int)&local_34 + ((uint)(((int)(bVar1 + 0x10) >> 5) << 0x1d) >> 0x1b)));
    sub_0801CFF0(param_1);
    *(byte *)(param_1 + 0xc4) = bVar1;
  }
  else {
    sub_0801CF00(param_1,0xad00);
    sub_0801CFF0(param_1);
  }
  return in_lr;
}

