// sub_080C5CA4 at 0x080C5CA4 (thumb)

undefined4 sub_080C5CA4(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar1 = *(byte *)(param_1 + 10) >> 4 & 1;
  uVar2 = 0;
  do {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    uVar2 = uVar2 + 1;
    sub_080D4898(&local_1c,&UNK_088623cc + (uVar2 & 3) * 0x1c,0,uVar1 | uVar1 << 4);
  } while ((int)uVar2 < 2);
  return in_lr;
}

