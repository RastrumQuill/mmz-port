// sub_08117D18 at 0x08117D18 (thumb)

undefined4 sub_08117D18(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_2 + 4);
  bVar2 = *(byte *)(param_2 + 6);
  puVar5 = (undefined2 *)(param_2 + 8);
  uVar3 = 0;
  if (bVar2 != 0) {
    do {
      uVar4 = 0;
      if (bVar1 != 0) {
        do {
          *(undefined2 *)
           (uVar4 * 2 +
           ((uint)(param_4 << 0x18) >> 0x12) + param_1 + ((uint)(param_3 << 0x18) >> 0x17) +
           uVar3 * 0x40) = *puVar5;
          puVar5 = puVar5 + 1;
          uVar4 = uVar4 + 1 & 0xff;
        } while (uVar4 < bVar1);
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < bVar2);
  }
  return in_lr;
}

