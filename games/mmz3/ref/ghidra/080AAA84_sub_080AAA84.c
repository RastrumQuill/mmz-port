// sub_080AAA84 at 0x080AAA84 (thumb)

undefined4 sub_080AAA84(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 in_lr;
  undefined4 local_24;
  undefined4 local_20;
  
  sub_080177F4();
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    sVar2 = sub_08009A3C();
    if (sVar2 != 0) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
      *(undefined *)(param_1 + 0x12) = 0x20;
      if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb8)) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8);
        sub_080177F4(param_1);
      }
      else {
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
    }
  }
  else {
    bVar5 = *(byte *)(param_1 + 0x12) & 7;
    if ((*(byte *)(param_1 + 0x12) & 7) == 0) {
      local_24 = *(undefined4 *)(param_1 + 0x54);
      local_20 = sub_0800A104(local_24,*(undefined4 *)(param_1 + 0x58));
      sub_080C13B8(&local_24,0,0,0x100,bVar5);
      sub_080C13B8(&local_24,0,0,0xffffff00,bVar5);
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar3 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      sub_080C13B8(&local_24,0,1,uVar4 * 2 >> 0x11 & 0x3f,-(uVar3 * 2 >> 0x11 & 0x7f));
      uVar4 = DAT_0202f608 * 0x343fd + 0x269ec3;
      uVar3 = (uVar4 & 0x7fffffff) * 0x343fd + 0x269ec3;
      DAT_0202f608 = uVar3 & 0x7fffffff;
      sub_080C13B8(&local_24,0,1,-(uVar4 * 2 >> 0x11 & 0x3f),-(uVar3 * 2 >> 0x11 & 0x7f));
    }
    cVar1 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar1;
    if (cVar1 == -1) {
      sub_080AA5B8(param_1,*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_083670d4)[*(byte *)(param_1 + 9)] + 8)
      ;
    }
  }
  return in_lr;
}

