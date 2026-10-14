// sub_08028148 at 0x08028148 (thumb)

undefined8 sub_08028148(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  uVar7 = (uint)*(byte *)(param_1 + 0x10);
  uVar8 = (uint)*(byte *)(param_2 + 0xd);
  if (uVar7 - 0x18 < 2) {
    if (1 < uVar8) {
      uVar2 = 1;
      goto LAB_080281de;
    }
  }
  else {
    uVar5 = 0;
    uVar6 = uVar5;
    if (0xb < uVar7) {
      do {
        uVar5 = uVar6 + 1;
        pbVar3 = &DAT_082ab3dd + uVar6;
        uVar6 = uVar5;
      } while (*pbVar3 <= uVar7);
    }
    if (uVar5 != uVar8) {
      iVar4 = sub_080C8CB0(uVar7 - (byte)(&DAT_082ab3d8)[uVar5],3);
      iVar4 = (uint)(byte)(&DAT_082ab3d8)[uVar8] + iVar4 + (uint)*(byte *)(param_2 + 0xc0) * 3;
      *(char *)(param_1 + 0x10) = (char)iVar4;
      iVar4 = iVar4 * 2;
      cVar1 = *(char *)(param_1 + 0x71);
      if (*(char *)(param_1 + 0xd) == '\x01') {
        iVar4 = iVar4 + 1;
      }
      sub_08025C94(param_1,*(undefined2 *)(&DAT_082ab348 + iVar4 * 2),(short)cVar1,
                   (short)*(char *)(param_1 + 0x72));
      sub_08028330(param_1,cVar1);
    }
  }
  uVar2 = 0;
LAB_080281de:
  return CONCAT44(in_lr,uVar2);
}

