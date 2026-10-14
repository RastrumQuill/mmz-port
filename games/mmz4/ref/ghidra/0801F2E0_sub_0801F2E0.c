// sub_0801F2E0 at 0x0801F2E0 (thumb)

undefined8 sub_0801F2E0(byte param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined4 in_lr;
  
  uVar1 = 0;
  bVar7 = false;
  if (param_1 == 0) {
    DAT_0202e91c = DAT_0202e91c + 1;
    uVar5 = (uint)DAT_0202ea10;
    uVar1 = 0;
    do {
      iVar2 = sub_0801F748(&DAT_0202e910);
      if (iVar2 == 0) {
        if ((DAT_0202e922 & 1) == 0) {
          if ((DAT_0202e8b4 & 0x20) == 0) {
            puVar3 = &DAT_0883f600;
          }
          else {
            puVar3 = &DAT_0883f64c;
          }
          sub_08128884(&DAT_0202e910,*(undefined4 *)(puVar3 + (uint)DAT_0202e910 * 4));
        }
        else {
          bVar7 = true;
        }
      }
      if ((DAT_0202e922 & 1) == 0) {
        uVar1 = ~(uint)DAT_0202e918 & 1;
      }
      iVar2 = sub_08027634(&DAT_0202e920);
      if (iVar2 == 0) {
        bVar7 = false;
        sub_0801F80C(&DAT_0202e910);
      }
      else {
        uVar1 = ~(uint)DAT_0202e918 & 1;
      }
    } while (bVar7);
    sub_0801F8C0();
    uVar4 = (uint)DAT_02000c82;
    uVar6 = uVar4 * 0x18 & 0xffffffe0;
    sub_081284E4(&DAT_02000c84,&DAT_02000f84,uVar6 >> 2);
    uVar4 = uVar4 * 0x18 & 0x1f;
    if (uVar4 != 0) {
      sub_081284E8((int)&DAT_02000c84 + uVar6,(int)&DAT_02000f84 + uVar6,uVar4 >> 2 | 0x4000000);
    }
    DAT_02000c83 = DAT_02000c82;
    DAT_02000c82 = param_1;
    if (DAT_0202ea10 != '\0') {
      sub_08006C58(&DAT_0202ea30);
    }
    sub_0801F698(&DAT_0202e910);
    if (((int)(-uVar5 | uVar5) < 0) && (DAT_0202ea10 != '\0')) {
      sub_0801D5E0(&DAT_0202ea30);
    }
  }
  return CONCAT44(in_lr,uVar1);
}

