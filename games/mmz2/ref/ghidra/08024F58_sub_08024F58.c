// sub_08024F58 at 0x08024F58 (thumb)

undefined8 sub_08024F58(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x191);
  if ((bVar1 & 0x1e) == 0) {
    uVar5 = *(uint *)(param_1 + 0x8c) & 0x400;
    uVar4 = (undefined2)uVar5;
    if (uVar5 != 0) {
      *(undefined *)(param_1 + 0x174) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 5;
      *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
      *(ushort *)(param_1 + 0xe) = bVar1 & 0x1e;
      *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
      *(undefined *)(param_1 + 0x176) = 0;
      *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
      *(undefined *)(param_1 + 0x177) = 0;
      *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
      *(undefined *)(param_1 + 0x178) = 0;
      *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
      *(undefined *)(param_1 + 0x179) = 0;
      uVar2 = 5;
      goto LAB_0802506a;
    }
    if (bVar1 != 0) {
      uVar3 = *(undefined *)(param_1 + 0xd);
      goto LAB_08025012;
    }
  }
  else {
    uVar3 = *(undefined *)(param_1 + 0xd);
    uVar4 = 0;
LAB_08025012:
    *(undefined *)(param_1 + 0x174) = uVar3;
    *(undefined *)(param_1 + 0xd) = 7;
    *(undefined *)(param_1 + 0x175) = *(undefined *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xe) = uVar4;
    *(undefined *)(param_1 + 0x17a) = *(undefined *)(param_1 + 0x176);
    *(undefined *)(param_1 + 0x176) = 0;
    *(undefined *)(param_1 + 0x17b) = *(undefined *)(param_1 + 0x177);
    *(undefined *)(param_1 + 0x177) = 0;
    *(undefined *)(param_1 + 0x17c) = *(undefined *)(param_1 + 0x178);
    *(undefined *)(param_1 + 0x178) = 0;
    *(undefined *)(param_1 + 0x17d) = *(undefined *)(param_1 + 0x179);
    *(undefined *)(param_1 + 0x179) = 0;
  }
  uVar2 = 7;
LAB_0802506a:
  return CONCAT44(in_lr,uVar2);
}

