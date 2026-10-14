// sub_08037338 at 0x08037338 (thumb)

undefined4 sub_08037338(int param_1)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0xc) & 0xffff00) != 0x20700) && (*(byte *)(param_1 + 0xd) < 10)) &&
     (*(byte *)(param_1 + 0xd) != 8)) {
    uVar1 = DAT_0202ec34;
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar1 = DAT_0202ec36;
    }
    if ((uVar1 & 0x8000) == 0) {
      if ((*(char *)(param_1 + 0x1f5) == '\x02') && (bVar2 = sub_08037C20(param_1), 1 < bVar2)) {
        if ((*(byte *)(param_1 + 0x196) & 0x80) != 0) {
          if (*(byte *)(param_1 + 0x176) < 2) {
            uVar3 = 0;
            if (*(byte *)(param_1 + 0x214) == 0) {
              uVar3 = 1;
            }
          }
          else {
            uVar3 = -(uint)(*(byte *)(param_1 + 0x2b6) ^ *(byte *)(param_1 + 0x213)) >> 0x1f;
          }
          if (uVar3 != *(byte *)(param_1 + 0x214)) {
            *(char *)(param_1 + 0x214) = (char)uVar3;
            sub_0801E6AC(5);
          }
        }
      }
      else {
        *(undefined *)(param_1 + 0x214) = 0;
      }
    }
  }
  return in_lr;
}

