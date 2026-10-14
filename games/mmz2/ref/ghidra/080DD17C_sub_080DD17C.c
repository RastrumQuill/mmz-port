// sub_080DD17C at 0x080DD17C (thumb)

undefined8 sub_080DD17C(int param_1)

{
  undefined uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 in_lr;
  
  iVar4 = sub_080DD138();
  uVar1 = *(undefined *)(param_1 + 0x12);
  uVar2 = *(ushort *)(param_1 + 0x78);
  sVar3 = sub_080EF118(param_1,*(undefined4 *)(&DAT_0834c334 + (uint)*(byte *)(param_1 + 0x11) * 4))
  ;
  uVar5 = sub_080D6094(iVar4,uVar1,(int)sVar3);
  uVar8 = uVar5 & 0xff;
  if (uVar8 - 1 < 0x51) {
    uVar7 = (uVar5 << 0x18) >> 0x1b;
    if ((((int)(uint)*(byte *)(iVar4 + 0x228 + uVar7) >> (uVar5 & 7) & 1U) != 0) &&
       (iVar6 = sub_080D58A8(uVar1,uVar8), -1 < iVar6 * 0x1000000)) {
      uVar8 = sub_080DD070(iVar4,uVar8);
      uVar10 = uVar8 & 0xffff;
      if (uVar10 != uVar2) {
        *(ushort *)(param_1 + 0x78) = (ushort)uVar8;
        uVar9 = (uVar8 << 0x10) >> 0x18;
        uVar8 = (uVar9 << 0x10) >> 0xf;
        *(undefined2 *)((int)&DAT_0202e590 + uVar8) = 0x390;
        *(undefined2 *)((int)&DAT_0202e390 + uVar8) = 6;
        sub_08002638(&DAT_08432d00 + uVar9 * 5,
                     ((uint)(ushort)(&DAT_0202e590)[uVar9] -
                     (uint)((ushort)(&DAT_08432d06)[uVar9 * 10] >> 6)) * 0x20 + 0x10000);
        sub_08002AEC(&DAT_08432d0c + uVar9 * 0x14,
                     ((uint)(ushort)(&DAT_0202e390)[uVar9] -
                     (uint)(byte)(&DAT_08432d13)[uVar9 * 0x14]) * 0x20 + 0x200);
        sub_08012580(param_1);
        sub_080127E4(param_1,uVar10);
      }
      if (((int)(uint)*(byte *)(iVar4 + 0x233 + uVar7) >> (uVar5 & 7) & 1U) == 0) {
        sub_08012CA4(param_1,7);
      }
      else {
        sub_08012CA4(param_1,6);
      }
      goto LAB_080dd2b6;
    }
  }
  uVar10 = 0;
LAB_080dd2b6:
  return CONCAT44(in_lr,uVar10);
}

